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
		
		Xml_Encoding(QAndroidJniObject obj);
		// Constructors
		Xml_Encoding() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace android::util

