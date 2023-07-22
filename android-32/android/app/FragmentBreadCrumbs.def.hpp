#pragma once

#include "../view/ViewGroup.def.hpp"

namespace android::app
{
	class Activity;
}
namespace android::content
{
	class Context;
}
class JString;

namespace android::app
{
	class FragmentBreadCrumbs : public android::view::ViewGroup
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FragmentBreadCrumbs(const char *className, const char *sig, Ts...agv) : android::view::ViewGroup(className, sig, std::forward<Ts>(agv)...) {}
		FragmentBreadCrumbs(QAndroidJniObject obj) : android::view::ViewGroup(obj) {}
		
		// Constructors
		FragmentBreadCrumbs(android::content::Context arg0);
		FragmentBreadCrumbs(android::content::Context arg0, JObject arg1);
		FragmentBreadCrumbs(android::content::Context arg0, JObject arg1, jint arg2);
		
		// Methods
		void onBackStackChanged() const;
		void setActivity(android::app::Activity arg0) const;
		void setMaxVisible(jint arg0) const;
		void setOnBreadCrumbClickListener(JObject arg0) const;
		void setParentTitle(JString arg0, JString arg1, JObject arg2) const;
		void setTitle(JString arg0, JString arg1) const;
	};
} // namespace android::app

