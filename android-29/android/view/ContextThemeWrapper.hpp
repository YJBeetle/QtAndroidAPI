#pragma once

#include "../../__JniBaseClass.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"

namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class AssetManager;
}
namespace android::content::res
{
	class Configuration;
}
namespace android::content::res
{
	class Resources;
}
namespace android::content::res
{
	class Resources_Theme;
}

namespace android::view
{
	class ContextThemeWrapper : public android::content::ContextWrapper
	{
	public:
		// Fields
		
		ContextThemeWrapper(QAndroidJniObject obj);
		// Constructors
		ContextThemeWrapper();
		ContextThemeWrapper(android::content::Context &arg0, android::content::res::Resources_Theme &arg1);
		ContextThemeWrapper(android::content::Context &arg0, jint &arg1);
		
		// Methods
		void applyOverrideConfiguration(android::content::res::Configuration arg0);
		QAndroidJniObject getAssets();
		QAndroidJniObject getResources();
		jobject getSystemService(jstring arg0);
		jobject getSystemService(const QString &arg0);
		QAndroidJniObject getTheme();
		void setTheme(android::content::res::Resources_Theme arg0);
		void setTheme(jint arg0);
	};
} // namespace android::view

