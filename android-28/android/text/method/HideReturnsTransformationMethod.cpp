#include "../../../JCharArray.hpp"
#include "./HideReturnsTransformationMethod.hpp"

namespace android::text::method
{
	// Fields
	
	// Constructors
	HideReturnsTransformationMethod::HideReturnsTransformationMethod()
		: android::text::method::ReplacementTransformationMethod(
			"android.text.method.HideReturnsTransformationMethod",
			"()V"
		) {}
	
	// Methods
	android::text::method::HideReturnsTransformationMethod HideReturnsTransformationMethod::getInstance()
	{
		return callStaticObjectMethod(
			"android.text.method.HideReturnsTransformationMethod",
			"getInstance",
			"()Landroid/text/method/HideReturnsTransformationMethod;"
		);
	}
} // namespace android::text::method

