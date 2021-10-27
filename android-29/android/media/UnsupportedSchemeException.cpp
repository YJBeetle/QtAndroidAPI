#include "./UnsupportedSchemeException.hpp"

namespace android::media
{
	// Fields
	
	UnsupportedSchemeException::UnsupportedSchemeException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	UnsupportedSchemeException::UnsupportedSchemeException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.UnsupportedSchemeException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	UnsupportedSchemeException::UnsupportedSchemeException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.UnsupportedSchemeException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace android::media

