#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::util
{
	class Xml_Encoding : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject ISO_8859_1();
		static QAndroidJniObject US_ASCII();
		static QAndroidJniObject UTF_16();
		static QAndroidJniObject UTF_8();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Xml_Encoding(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Xml_Encoding(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::util

