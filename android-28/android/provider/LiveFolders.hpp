#pragma once

#include "../../JObject.hpp"


namespace android::provider
{
	class LiveFolders : public JObject
	{
	public:
		// Fields
		static jstring ACTION_CREATE_LIVE_FOLDER();
		static jstring DESCRIPTION();
		static jint DISPLAY_MODE_GRID();
		static jint DISPLAY_MODE_LIST();
		static jstring EXTRA_LIVE_FOLDER_BASE_INTENT();
		static jstring EXTRA_LIVE_FOLDER_DISPLAY_MODE();
		static jstring EXTRA_LIVE_FOLDER_ICON();
		static jstring EXTRA_LIVE_FOLDER_NAME();
		static jstring ICON_BITMAP();
		static jstring ICON_PACKAGE();
		static jstring ICON_RESOURCE();
		static jstring INTENT();
		static jstring NAME();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LiveFolders(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LiveFolders(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

