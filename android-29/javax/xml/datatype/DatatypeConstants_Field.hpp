#pragma once

#include "../../../__JniBaseClass.hpp"


namespace javax::xml::datatype
{
	class DatatypeConstants_Field : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DatatypeConstants_Field(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DatatypeConstants_Field(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint getId();
		jstring toString();
	};
} // namespace javax::xml::datatype

