#include "./HideReturnsTransformationMethod.hpp"

namespace android::text::method
{
	// Fields
	
	// QAndroidJniObject forward
	HideReturnsTransformationMethod::HideReturnsTransformationMethod(QAndroidJniObject obj) : android::text::method::ReplacementTransformationMethod(obj) {}
	
	// Constructors
	HideReturnsTransformationMethod::HideReturnsTransformationMethod()
		: android::text::method::ReplacementTransformationMethod(
			"android.text.method.HideReturnsTransformationMethod",
			"()V"
		) {}
	
	// Methods
	android::text::method::HideReturnsTransformationMethod HideReturnsTransformationMethod::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.HideReturnsTransformationMethod",
			"getInstance",
			"()Landroid/text/method/HideReturnsTransformationMethod;"
		);
	}
} // namespace android::text::method

