#include "./DeniedByServerException.hpp"

namespace android::media
{
	// Fields
	
	DeniedByServerException::DeniedByServerException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DeniedByServerException::DeniedByServerException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.DeniedByServerException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	DeniedByServerException::DeniedByServerException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.DeniedByServerException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace android::media

