#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::provider
{
	class LiveFolders : public __JniBaseClass
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
		
		// QJniObject forward
		template<typename ...Ts> explicit LiveFolders(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		LiveFolders(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

