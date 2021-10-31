#include "./UnsupportedSchemeException.hpp"

namespace android::media
{
	// Fields
	
	UnsupportedSchemeException::UnsupportedSchemeException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	UnsupportedSchemeException::UnsupportedSchemeException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.UnsupportedSchemeException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::media

