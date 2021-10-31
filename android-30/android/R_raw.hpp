#pragma once

#include "../__JniBaseClass.hpp"


namespace android
{
	class R_raw : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit R_raw(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		R_raw(QJniObject obj);
		
		// Constructors
		R_raw();
		
		// Methods
	};
} // namespace android

