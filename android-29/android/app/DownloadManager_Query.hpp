#pragma once

#include "../../JObject.hpp"

class JLongArray;

namespace android::app
{
	class DownloadManager_Query : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DownloadManager_Query(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DownloadManager_Query(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		DownloadManager_Query();
		
		// Methods
		android::app::DownloadManager_Query setFilterById(JLongArray arg0) const;
		android::app::DownloadManager_Query setFilterByStatus(jint arg0) const;
	};
} // namespace android::app

