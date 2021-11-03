#include "./R_xml.hpp"

namespace android
{
	// Fields
	
	// QJniObject forward
	R_xml::R_xml(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	R_xml::R_xml()
		: JObject(
			"android.R$xml",
			"()V"
		) {}
	
	// Methods
} // namespace android

