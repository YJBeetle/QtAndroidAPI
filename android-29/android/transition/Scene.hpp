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
		
		Scene(QAndroidJniObject obj);
		// Constructors
		Scene(android::view::ViewGroup arg0);
		Scene(android::view::ViewGroup arg0, android::view::View arg1);
		Scene(android::view::ViewGroup arg0, android::view::ViewGroup arg1);
		Scene() = default;
		
		// Methods
		static QAndroidJniObject getCurrentScene(android::view::ViewGroup arg0);
		static QAndroidJniObject getSceneForLayout(android::view::ViewGroup arg0, jint arg1, android::content::Context arg2);
		void enter();
		void exit();
		QAndroidJniObject getSceneRoot();
		void setEnterAction(__JniBaseClass arg0);
		void setExitAction(__JniBaseClass arg0);
	};
} // namespace android::transition

