#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class Fragment;
}
namespace android::view
{
	class View;
}
class JString;
class JString;

namespace android::app
{
	class FragmentTransaction : public JObject
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FragmentTransaction(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FragmentTransaction(QAndroidJniObject obj);
		
		// Constructors
		FragmentTransaction();
		
		// Methods
		android::app::FragmentTransaction add(android::app::Fragment arg0, JString arg1);
		android::app::FragmentTransaction add(jint arg0, android::app::Fragment arg1);
		android::app::FragmentTransaction add(jint arg0, android::app::Fragment arg1, JString arg2);
		android::app::FragmentTransaction addSharedElement(android::view::View arg0, JString arg1);
		android::app::FragmentTransaction addToBackStack(JString arg0);
		android::app::FragmentTransaction attach(android::app::Fragment arg0);
		jint commit();
		jint commitAllowingStateLoss();
		void commitNow();
		void commitNowAllowingStateLoss();
		android::app::FragmentTransaction detach(android::app::Fragment arg0);
		android::app::FragmentTransaction disallowAddToBackStack();
		android::app::FragmentTransaction hide(android::app::Fragment arg0);
		jboolean isAddToBackStackAllowed();
		jboolean isEmpty();
		android::app::FragmentTransaction remove(android::app::Fragment arg0);
		android::app::FragmentTransaction replace(jint arg0, android::app::Fragment arg1);
		android::app::FragmentTransaction replace(jint arg0, android::app::Fragment arg1, JString arg2);
		android::app::FragmentTransaction runOnCommit(JObject arg0);
		android::app::FragmentTransaction setBreadCrumbShortTitle(jint arg0);
		android::app::FragmentTransaction setBreadCrumbShortTitle(JString arg0);
		android::app::FragmentTransaction setBreadCrumbTitle(jint arg0);
		android::app::FragmentTransaction setBreadCrumbTitle(JString arg0);
		android::app::FragmentTransaction setCustomAnimations(jint arg0, jint arg1);
		android::app::FragmentTransaction setCustomAnimations(jint arg0, jint arg1, jint arg2, jint arg3);
		android::app::FragmentTransaction setPrimaryNavigationFragment(android::app::Fragment arg0);
		android::app::FragmentTransaction setReorderingAllowed(jboolean arg0);
		android::app::FragmentTransaction setTransition(jint arg0);
		android::app::FragmentTransaction setTransitionStyle(jint arg0);
		android::app::FragmentTransaction show(android::app::Fragment arg0);
	};
} // namespace android::app

