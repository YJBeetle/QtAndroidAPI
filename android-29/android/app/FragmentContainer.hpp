#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::view
{
	class View;
}

namespace android::app
{
	class FragmentContainer : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FragmentContainer(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FragmentContainer(QAndroidJniObject obj);
		
		// Constructors
		FragmentContainer();
		
		// Methods
		QAndroidJniObject onFindViewById(jint arg0);
		jboolean onHasView();
	};
} // namespace android::app

