#include "./R_xml.hpp"

namespace android
{
	// Fields
	
	// QAndroidJniObject forward
	R_xml::R_xml(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	R_xml::R_xml()
		: __JniBaseClass(
			"android.R$xml",
			"()V"
		) {}
	
	// Methods
} // namespace android

