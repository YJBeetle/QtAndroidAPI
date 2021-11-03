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
class JString;

namespace android::text::method
{
	class PasswordTransformationMethod : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PasswordTransformationMethod(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PasswordTransformationMethod(QAndroidJniObject obj);
		
		// Constructors
		PasswordTransformationMethod();
		
		// Methods
		static android::text::method::PasswordTransformationMethod getInstance();
		void afterTextChanged(JObject arg0) const;
		void beforeTextChanged(JString arg0, jint arg1, jint arg2, jint arg3) const;
		JString getTransformation(JString arg0, android::view::View arg1) const;
		void onFocusChanged(android::view::View arg0, JString arg1, jboolean arg2, jint arg3, android::graphics::Rect arg4) const;
		void onTextChanged(JString arg0, jint arg1, jint arg2, jint arg3) const;
	};
} // namespace android::text::method

