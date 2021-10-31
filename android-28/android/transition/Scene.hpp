#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class View;
}
namespace android::view
{
	class ViewGroup;
}

namespace android::transition
{
	class Scene : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Scene(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Scene(QAndroidJniObject obj);
		
		// Constructors
		Scene(android::view::ViewGroup arg0);
		Scene(android::view::ViewGroup arg0, android::view::View arg1);
		Scene(android::view::ViewGroup arg0, android::view::ViewGroup arg1);
		
		// Methods
		static android::transition::Scene getSceneForLayout(android::view::ViewGroup arg0, jint arg1, android::content::Context arg2);
		void enter();
		void exit();
		android::view::ViewGroup getSceneRoot();
		void setEnterAction(__JniBaseClass arg0);
		void setExitAction(__JniBaseClass arg0);
	};
} // namespace android::transition

