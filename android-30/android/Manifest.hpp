#pragma once

#include "../__JniBaseClass.hpp"


namespace android
{
	class Manifest : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Manifest(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Manifest(QJniObject obj);
		
		// Constructors
		Manifest();
		
		// Methods
	};
} // namespace android

