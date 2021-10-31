#pragma once

#include "../__JniBaseClass.hpp"


namespace android
{
	class R_plurals : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit R_plurals(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		R_plurals(QJniObject obj);
		
		// Constructors
		R_plurals();
		
		// Methods
	};
} // namespace android

