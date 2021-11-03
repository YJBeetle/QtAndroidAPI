#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::content::res
{
	class TypedArray;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::os
{
	class Bundle;
}
namespace android::preference
{
	class PreferenceGroup;
}
namespace android::preference
{
	class PreferenceManager;
}
namespace android::view
{
	class View;
}
namespace android::view
{
	class ViewGroup;
}
class JString;
class JObject;
class JString;

namespace android::preference
{
	class Preference : public JObject
	{
	public:
		// Fields
		static jint DEFAULT_ORDER();
		
		// QJniObject forward
		template<typename ...Ts> explicit Preference(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Preference(QJniObject obj);
		
		// Constructors
		Preference(android::content::Context arg0);
		Preference(android::content::Context arg0, JObject arg1);
		Preference(android::content::Context arg0, JObject arg1, jint arg2);
		Preference(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		jint compareTo(android::preference::Preference arg0) const;
		jint compareTo(JObject arg0) const;
		android::content::Context getContext() const;
		JString getDependency() const;
		JObject getEditor() const;
		android::os::Bundle getExtras() const;
		JString getFragment() const;
		android::graphics::drawable::Drawable getIcon() const;
		android::content::Intent getIntent() const;
		JString getKey() const;
		jint getLayoutResource() const;
		JObject getOnPreferenceChangeListener() const;
		JObject getOnPreferenceClickListener() const;
		jint getOrder() const;
		android::preference::PreferenceGroup getParent() const;
		JObject getPersistedStringSet(JObject arg0) const;
		JObject getPreferenceDataStore() const;
		android::preference::PreferenceManager getPreferenceManager() const;
		JObject getSharedPreferences() const;
		jboolean getShouldDisableView() const;
		JString getSummary() const;
		JString getTitle() const;
		jint getTitleRes() const;
		android::view::View getView(android::view::View arg0, android::view::ViewGroup arg1) const;
		jint getWidgetLayoutResource() const;
		jboolean hasKey() const;
		jboolean isEnabled() const;
		jboolean isIconSpaceReserved() const;
		jboolean isPersistent() const;
		jboolean isRecycleEnabled() const;
		jboolean isSelectable() const;
		jboolean isSingleLineTitle() const;
		void notifyDependencyChange(jboolean arg0) const;
		void onDependencyChanged(android::preference::Preference arg0, jboolean arg1) const;
		void onParentChanged(android::preference::Preference arg0, jboolean arg1) const;
		android::os::Bundle peekExtras() const;
		jboolean persistStringSet(JObject arg0) const;
		void restoreHierarchyState(android::os::Bundle arg0) const;
		void saveHierarchyState(android::os::Bundle arg0) const;
		void setDefaultValue(JObject arg0) const;
		void setDependency(JString arg0) const;
		void setEnabled(jboolean arg0) const;
		void setFragment(JString arg0) const;
		void setIcon(android::graphics::drawable::Drawable arg0) const;
		void setIcon(jint arg0) const;
		void setIconSpaceReserved(jboolean arg0) const;
		void setIntent(android::content::Intent arg0) const;
		void setKey(JString arg0) const;
		void setLayoutResource(jint arg0) const;
		void setOnPreferenceChangeListener(JObject arg0) const;
		void setOnPreferenceClickListener(JObject arg0) const;
		void setOrder(jint arg0) const;
		void setPersistent(jboolean arg0) const;
		void setPreferenceDataStore(JObject arg0) const;
		void setRecycleEnabled(jboolean arg0) const;
		void setSelectable(jboolean arg0) const;
		void setShouldDisableView(jboolean arg0) const;
		void setSingleLineTitle(jboolean arg0) const;
		void setSummary(jint arg0) const;
		void setSummary(JString arg0) const;
		void setTitle(jint arg0) const;
		void setTitle(JString arg0) const;
		void setWidgetLayoutResource(jint arg0) const;
		jboolean shouldCommit() const;
		jboolean shouldDisableDependents() const;
		JString toString() const;
	};
} // namespace android::preference

