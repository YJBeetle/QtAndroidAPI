#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::text
{
	class LoginFilter : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LoginFilter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LoginFilter(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JString filter(JString arg0, jint arg1, jint arg2, JObject arg3, jint arg4, jint arg5) const;
		jboolean isAllowed(jchar arg0) const;
		void onInvalidCharacter(jchar arg0) const;
		void onStart() const;
		void onStop() const;
	};
} // namespace android::text

