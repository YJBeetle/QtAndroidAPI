#include "./R_xml.hpp"

namespace android
{
	// Fields
	
	// QJniObject forward
	R_xml::R_xml(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	R_xml::R_xml()
		: __JniBaseClass(
			"android.R$xml",
			"()V"
		) {}
	
	// Methods
} // namespace android

