#pragma once

#include "../__JniBaseClass.hpp"


namespace android
{
	class R_menu : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit R_menu(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		R_menu(QJniObject obj);
		
		// Constructors
		R_menu();
		
		// Methods
	};
} // namespace android

