#include "./R_xml.hpp"

namespace android
{
	// Fields
	
	// QAndroidJniObject forward
	R_xml::R_xml(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	R_xml::R_xml()
		: JObject(
			"android.R$xml",
			"()V"
		) {}
	
	// Methods
} // namespace android

