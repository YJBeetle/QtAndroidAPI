#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class Fragment;
}
namespace android::view
{
	class View;
}

namespace android::app
{
	class FragmentTransaction : public __JniBaseClass
	{
	public:
		// Fields
		static jint TRANSIT_ENTER_MASK();
		static jint TRANSIT_EXIT_MASK();
		static jint TRANSIT_FRAGMENT_CLOSE();
		static jint TRANSIT_FRAGMENT_FADE();
		static jint TRANSIT_FRAGMENT_OPEN();
		static jint TRANSIT_NONE();
		static jint TRANSIT_UNSET();
		
		FragmentTransaction(QAndroidJniObject obj);
		// Constructors
		FragmentTransaction();
		
		// Methods
		QAndroidJniObject add(android::app::Fragment arg0, jstring arg1);
		QAndroidJniObject add(jint arg0, android::app::Fragment arg1);
		QAndroidJniObject add(jint arg0, android::app::Fragment arg1, jstring arg2);
		QAndroidJniObject addSharedElement(android::view::View arg0, jstring arg1);
		QAndroidJniObject addToBackStack(jstring arg0);
		QAndroidJniObject attach(android::app::Fragment arg0);
		jint commit();
		jint commitAllowingStateLoss();
		void commitNow();
		void commitNowAllowingStateLoss();
		QAndroidJniObject detach(android::app::Fragment arg0);
		QAndroidJniObject disallowAddToBackStack();
		QAndroidJniObject hide(android::app::Fragment arg0);
		jboolean isAddToBackStackAllowed();
		jboolean isEmpty();
		QAndroidJniObject remove(android::app::Fragment arg0);
		QAndroidJniObject replace(jint arg0, android::app::Fragment arg1);
		QAndroidJniObject replace(jint arg0, android::app::Fragment arg1, jstring arg2);
		QAndroidJniObject runOnCommit(__JniBaseClass arg0);
		QAndroidJniObject setBreadCrumbShortTitle(jint arg0);
		QAndroidJniObject setBreadCrumbShortTitle(jstring arg0);
		QAndroidJniObject setBreadCrumbTitle(jint arg0);
		QAndroidJniObject setBreadCrumbTitle(jstring arg0);
		QAndroidJniObject setCustomAnimations(jint arg0, jint arg1);
		QAndroidJniObject setCustomAnimations(jint arg0, jint arg1, jint arg2, jint arg3);
		QAndroidJniObject setPrimaryNavigationFragment(android::app::Fragment arg0);
		QAndroidJniObject setReorderingAllowed(jboolean arg0);
		QAndroidJniObject setTransition(jint arg0);
		QAndroidJniObject setTransitionStyle(jint arg0);
		QAndroidJniObject show(android::app::Fragment arg0);
	};
} // namespace android::app

