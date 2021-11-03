#pragma once

#include "../JObject.hpp"


namespace android
{
	class R_animator : public JObject
	{
	public:
		// Fields
		static jint fade_in();
		static jint fade_out();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit R_animator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		R_animator(QAndroidJniObject obj);
		
		// Constructors
		R_animator();
		
		// Methods
	};
} // namespace android

