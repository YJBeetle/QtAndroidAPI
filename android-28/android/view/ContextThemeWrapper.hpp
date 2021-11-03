#pragma once

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
class JObject;
class JString;

namespace android::view
{
	class ContextThemeWrapper : public android::content::ContextWrapper
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContextThemeWrapper(const char *className, const char *sig, Ts...agv) : android::content::ContextWrapper(className, sig, std::forward<Ts>(agv)...) {}
		ContextThemeWrapper(QAndroidJniObject obj);
		
		// Constructors
		ContextThemeWrapper();
		ContextThemeWrapper(android::content::Context arg0, android::content::res::Resources_Theme arg1);
		ContextThemeWrapper(android::content::Context arg0, jint arg1);
		
		// Methods
		void applyOverrideConfiguration(android::content::res::Configuration arg0) const;
		android::content::res::AssetManager getAssets() const;
		android::content::res::Resources getResources() const;
		JObject getSystemService(JString arg0) const;
		android::content::res::Resources_Theme getTheme() const;
		void setTheme(jint arg0) const;
	};
} // namespace android::view

