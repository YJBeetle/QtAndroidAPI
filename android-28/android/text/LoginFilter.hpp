#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::text
{
	class LoginFilter : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LoginFilter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LoginFilter(QJniObject obj);
		
		// Constructors
		
		// Methods
		JString filter(JString arg0, jint arg1, jint arg2, JObject arg3, jint arg4, jint arg5);
		jboolean isAllowed(jchar arg0);
		void onInvalidCharacter(jchar arg0);
		void onStart();
		void onStop();
	};
} // namespace android::text

