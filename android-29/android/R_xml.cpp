#include "./R_xml.hpp"

namespace android
{
	// Fields
	
	R_xml::R_xml(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	R_xml::R_xml()
	{
		__thiz = QAndroidJniObject(
			"android.R$xml",
			"()V"
		);
	}
	
	// Methods
} // namespace android

