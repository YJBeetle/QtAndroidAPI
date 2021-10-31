#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}

namespace android::view
{
	class MenuInflater : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MenuInflater(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MenuInflater(QAndroidJniObject obj);
		
		// Constructors
		MenuInflater(android::content::Context arg0);
		
		// Methods
		void inflate(jint arg0, __JniBaseClass arg1);
	};
} // namespace android::view

