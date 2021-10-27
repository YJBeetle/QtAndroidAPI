#include "./HideReturnsTransformationMethod.hpp"

namespace android::text::method
{
	// Fields
	
	HideReturnsTransformationMethod::HideReturnsTransformationMethod(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	HideReturnsTransformationMethod::HideReturnsTransformationMethod()
	{
		__thiz = QAndroidJniObject(
			"android.text.method.HideReturnsTransformationMethod",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject HideReturnsTransformationMethod::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.HideReturnsTransformationMethod",
			"getInstance",
			"()Landroid/text/method/HideReturnsTransformationMethod;"
		);
	}
} // namespace android::text::method

