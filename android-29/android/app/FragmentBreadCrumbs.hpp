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
		
		FragmentBreadCrumbs(QAndroidJniObject obj);
		// Constructors
		FragmentBreadCrumbs(android::content::Context &arg0);
		FragmentBreadCrumbs(android::content::Context &arg0, __JniBaseClass &arg1);
		FragmentBreadCrumbs(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2);
		FragmentBreadCrumbs() = default;
		
		// Methods
		void onBackStackChanged();
		void setActivity(android::app::Activity arg0);
		void setMaxVisible(jint arg0);
		void setOnBreadCrumbClickListener(__JniBaseClass arg0);
		void setParentTitle(jstring arg0, jstring arg1, __JniBaseClass arg2);
		void setParentTitle(const QString &arg0, const QString &arg1, __JniBaseClass arg2);
		void setTitle(jstring arg0, jstring arg1);
		void setTitle(const QString &arg0, const QString &arg1);
	};
} // namespace android::app

