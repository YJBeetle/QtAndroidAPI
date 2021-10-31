#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"

namespace android::app
{
	class Activity;
}
namespace android::content
{
	class Context;
}

namespace android::app
{
	class FragmentBreadCrumbs : public android::view::ViewGroup
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FragmentBreadCrumbs(const char *className, const char *sig, Ts...agv) : android::view::ViewGroup(className, sig, std::forward<Ts>(agv)...) {}
		FragmentBreadCrumbs(QAndroidJniObject obj);
		
		// Constructors
		FragmentBreadCrumbs(android::content::Context arg0);
		FragmentBreadCrumbs(android::content::Context arg0, __JniBaseClass arg1);
		FragmentBreadCrumbs(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		
		// Methods
		void onBackStackChanged();
		void setActivity(android::app::Activity arg0);
		void setMaxVisible(jint arg0);
		void setOnBreadCrumbClickListener(__JniBaseClass arg0);
		void setParentTitle(jstring arg0, jstring arg1, __JniBaseClass arg2);
		void setTitle(jstring arg0, jstring arg1);
	};
} // namespace android::app

