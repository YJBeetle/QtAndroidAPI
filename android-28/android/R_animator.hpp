#pragma once

#include "../__JniBaseClass.hpp"


namespace android
{
	class R_animator : public __JniBaseClass
	{
	public:
		// Fields
		static jint fade_in();
		static jint fade_out();
		
		// QJniObject forward
		template<typename ...Ts> explicit R_animator(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		R_animator(QJniObject obj);
		
		// Constructors
		R_animator();
		
		// Methods
	};
} // namespace android

