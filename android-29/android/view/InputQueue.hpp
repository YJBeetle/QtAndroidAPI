#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::view
{
	class InputQueue : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InputQueue(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		InputQueue(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::view

