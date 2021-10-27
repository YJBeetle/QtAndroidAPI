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
		
		FragmentContainer(QAndroidJniObject obj);
		// Constructors
		FragmentContainer();
		
		// Methods
		QAndroidJniObject onFindViewById(jint arg0);
		jboolean onHasView();
	};
} // namespace android::app

