#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::util
{
	class Xml_Encoding : public java::lang::Enum
	{
	public:
		// Fields
		static android::util::Xml_Encoding ISO_8859_1();
		static android::util::Xml_Encoding US_ASCII();
		static android::util::Xml_Encoding UTF_16();
		static android::util::Xml_Encoding UTF_8();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Xml_Encoding(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Xml_Encoding(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::util::Xml_Encoding valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::util

