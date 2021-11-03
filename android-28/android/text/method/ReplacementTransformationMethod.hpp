#pragma once

#include "../../../JObject.hpp"

namespace android::graphics
{
	class Rect;
}
namespace android::view
{
	class View;
}

namespace android::text::method
{
	class ReplacementTransformationMethod : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ReplacementTransformationMethod(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ReplacementTransformationMethod(QAndroidJniObject obj);
		
		// Constructors
		ReplacementTransformationMethod();
		
		// Methods
		jstring getTransformation(jstring arg0, android::view::View arg1);
		void onFocusChanged(android::view::View arg0, jstring arg1, jboolean arg2, jint arg3, android::graphics::Rect arg4);
	};
} // namespace android::text::method

