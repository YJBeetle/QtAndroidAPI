#pragma once

#include "../../JArray.hpp"
#include "../content/ComponentName.def.hpp"
#include "../content/Context.def.hpp"
#include "../../JString.hpp"
#include "./MediaScannerConnection.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline MediaScannerConnection::MediaScannerConnection(android::content::Context arg0, JObject arg1)
		: JObject(
			"android.media.MediaScannerConnection",
			"(Landroid/content/Context;Landroid/media/MediaScannerConnection$MediaScannerConnectionClient;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline void MediaScannerConnection::scanFile(android::content::Context arg0, JArray arg1, JArray arg2, JObject arg3)
	{
		callStaticMethod<void>(
			"android.media.MediaScannerConnection",
			"scanFile",
			"(Landroid/content/Context;[Ljava/lang/String;[Ljava/lang/String;Landroid/media/MediaScannerConnection$OnScanCompletedListener;)V",
			arg0.object(),
			arg1.object<jarray>(),
			arg2.object<jarray>(),
			arg3.object()
		);
	}
	inline void MediaScannerConnection::connect() const
	{
		callMethod<void>(
			"connect",
			"()V"
		);
	}
	inline void MediaScannerConnection::disconnect() const
	{
		callMethod<void>(
			"disconnect",
			"()V"
		);
	}
	inline jboolean MediaScannerConnection::isConnected() const
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	inline void MediaScannerConnection::onServiceConnected(android::content::ComponentName arg0, JObject arg1) const
	{
		callMethod<void>(
			"onServiceConnected",
			"(Landroid/content/ComponentName;Landroid/os/IBinder;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void MediaScannerConnection::onServiceDisconnected(android::content::ComponentName arg0) const
	{
		callMethod<void>(
			"onServiceDisconnected",
			"(Landroid/content/ComponentName;)V",
			arg0.object()
		);
	}
	inline void MediaScannerConnection::scanFile(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"scanFile",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
} // namespace android::media

// Base class headers

