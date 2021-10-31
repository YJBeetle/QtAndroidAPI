#pragma once

#include "../__JniBaseClass.hpp"


namespace android
{
	class R : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit R(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		R(QJniObject obj);
		
		// Constructors
		R();
		
		// Methods
	};
} // namespace android

