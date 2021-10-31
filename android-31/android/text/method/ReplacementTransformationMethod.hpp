#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class ReplacementTransformationMethod : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ReplacementTransformationMethod(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ReplacementTransformationMethod(QJniObject obj);
		
		// Constructors
		ReplacementTransformationMethod();
		
		// Methods
		jstring getTransformation(jstring arg0, android::view::View arg1);
		void onFocusChanged(android::view::View arg0, jstring arg1, jboolean arg2, jint arg3, android::graphics::Rect arg4);
	};
} // namespace android::text::method

