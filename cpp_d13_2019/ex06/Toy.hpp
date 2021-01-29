/*
** EPITECH PROJECT, 2020
** cpp_d13_2019
** File description:
** Toy
*/

#ifndef TOY_HPP_
#define TOY_HPP_

#include "Picture.hpp"

class Toy {
	public:
		enum ToyType {BASIC_TOY, ALIEN, BUZZ, WOODY};
		Toy();
		Toy(const ToyType, const std::string &, const std::string &);
		Toy(const Toy &oldtoy);
		~Toy();

		ToyType getType() const;
		std::string getName() const;

		void setName(const std::string);
		bool setAscii(const std::string &name);

		std::string getAscii() const;

		Toy &operator=(const Toy &cpyptr);

		virtual bool speak(const std::string &statement);

		Toy &operator<<(const std::string &out);

		class Error {
			public:
				Error();
				~Error();
				enum ErrorType {UNKNOWN, PICTURE, SPEAK};
				ErrorType type;
				std::string what() const;
				std::string where() const;
		};

		Error getLastError() const;

		virtual bool speak_es(const std::string &statement);

		Picture &getPicture();

	protected:
		const ToyType _type;
		std::string name;
		Picture _picture;
		Error _terror;

	private:
};

std::ostream &operator<<(std::ostream &, const Toy &);

#endif /* !TOY_HPP_ */
