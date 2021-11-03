#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "./ContentProvider.hpp"
#include "./ContentValues.hpp"
#include "./res/AssetFileDescriptor.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "../os/CancellationSignal.hpp"
#include "../os/ParcelFileDescriptor.hpp"
#include "../../JString.hpp"
#include "../../java/util/ArrayList.hpp"
#include "./ContentProviderClient.hpp"

namespace android::content
{
	// Fields
	
	// QAndroidJniObject forward
	ContentProviderClient::ContentProviderClient(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JArray ContentProviderClient::applyBatch(java::util::ArrayList arg0)
	{
		return callObjectMethod(
			"applyBatch",
			"(Ljava/util/ArrayList;)[Landroid/content/ContentProviderResult;",
			arg0.object()
		);
	}
	JArray ContentProviderClient::applyBatch(JString arg0, java::util::ArrayList arg1)
	{
		return callObjectMethod(
			"applyBatch",
			"(Ljava/lang/String;Ljava/util/ArrayList;)[Landroid/content/ContentProviderResult;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	jint ContentProviderClient::bulkInsert(android::net::Uri arg0, JArray arg1)
	{
		return callMethod<jint>(
			"bulkInsert",
			"(Landroid/net/Uri;[Landroid/content/ContentValues;)I",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	android::os::Bundle ContentProviderClient::call(JString arg0, JString arg1, android::os::Bundle arg2)
	{
		return callObjectMethod(
			"call",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	android::os::Bundle ContentProviderClient::call(JString arg0, JString arg1, JString arg2, android::os::Bundle arg3)
	{
		return callObjectMethod(
			"call",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object()
		);
	}
	android::net::Uri ContentProviderClient::canonicalize(android::net::Uri arg0)
	{
		return callObjectMethod(
			"canonicalize",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.object()
		);
	}
	void ContentProviderClient::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jint ContentProviderClient::_delete(android::net::Uri arg0, android::os::Bundle arg1)
	{
		return callMethod<jint>(
			"delete",
			"(Landroid/net/Uri;Landroid/os/Bundle;)I",
			arg0.object(),
			arg1.object()
		);
	}
	jint ContentProviderClient::_delete(android::net::Uri arg0, JString arg1, JArray arg2)
	{
		return callMethod<jint>(
			"delete",
			"(Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jarray>()
		);
	}
	android::content::ContentProvider ContentProviderClient::getLocalContentProvider()
	{
		return callObjectMethod(
			"getLocalContentProvider",
			"()Landroid/content/ContentProvider;"
		);
	}
	JArray ContentProviderClient::getStreamTypes(android::net::Uri arg0, JString arg1)
	{
		return callObjectMethod(
			"getStreamTypes",
			"(Landroid/net/Uri;Ljava/lang/String;)[Ljava/lang/String;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	JString ContentProviderClient::getType(android::net::Uri arg0)
	{
		return callObjectMethod(
			"getType",
			"(Landroid/net/Uri;)Ljava/lang/String;",
			arg0.object()
		);
	}
	android::net::Uri ContentProviderClient::insert(android::net::Uri arg0, android::content::ContentValues arg1)
	{
		return callObjectMethod(
			"insert",
			"(Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;",
			arg0.object(),
			arg1.object()
		);
	}
	android::net::Uri ContentProviderClient::insert(android::net::Uri arg0, android::content::ContentValues arg1, android::os::Bundle arg2)
	{
		return callObjectMethod(
			"insert",
			"(Landroid/net/Uri;Landroid/content/ContentValues;Landroid/os/Bundle;)Landroid/net/Uri;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	android::content::res::AssetFileDescriptor ContentProviderClient::openAssetFile(android::net::Uri arg0, JString arg1)
	{
		return callObjectMethod(
			"openAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	android::content::res::AssetFileDescriptor ContentProviderClient::openAssetFile(android::net::Uri arg0, JString arg1, android::os::CancellationSignal arg2)
	{
		return callObjectMethod(
			"openAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	android::os::ParcelFileDescriptor ContentProviderClient::openFile(android::net::Uri arg0, JString arg1)
	{
		return callObjectMethod(
			"openFile",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	android::os::ParcelFileDescriptor ContentProviderClient::openFile(android::net::Uri arg0, JString arg1, android::os::CancellationSignal arg2)
	{
		return callObjectMethod(
			"openFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/os/ParcelFileDescriptor;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	android::content::res::AssetFileDescriptor ContentProviderClient::openTypedAssetFile(android::net::Uri arg0, JString arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3)
	{
		return callObjectMethod(
			"openTypedAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object()
		);
	}
	android::content::res::AssetFileDescriptor ContentProviderClient::openTypedAssetFileDescriptor(android::net::Uri arg0, JString arg1, android::os::Bundle arg2)
	{
		return callObjectMethod(
			"openTypedAssetFileDescriptor",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/res/AssetFileDescriptor;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	android::content::res::AssetFileDescriptor ContentProviderClient::openTypedAssetFileDescriptor(android::net::Uri arg0, JString arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3)
	{
		return callObjectMethod(
			"openTypedAssetFileDescriptor",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object()
		);
	}
	JObject ContentProviderClient::query(android::net::Uri arg0, JArray arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3)
	{
		return callObjectMethod(
			"query",
			"(Landroid/net/Uri;[Ljava/lang/String;Landroid/os/Bundle;Landroid/os/CancellationSignal;)Landroid/database/Cursor;",
			arg0.object(),
			arg1.object<jarray>(),
			arg2.object(),
			arg3.object()
		);
	}
	JObject ContentProviderClient::query(android::net::Uri arg0, JArray arg1, JString arg2, JArray arg3, JString arg4)
	{
		return callObjectMethod(
			"query",
			"(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.object(),
			arg1.object<jarray>(),
			arg2.object<jstring>(),
			arg3.object<jarray>(),
			arg4.object<jstring>()
		);
	}
	JObject ContentProviderClient::query(android::net::Uri arg0, JArray arg1, JString arg2, JArray arg3, JString arg4, android::os::CancellationSignal arg5)
	{
		return callObjectMethod(
			"query",
			"(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/database/Cursor;",
			arg0.object(),
			arg1.object<jarray>(),
			arg2.object<jstring>(),
			arg3.object<jarray>(),
			arg4.object<jstring>(),
			arg5.object()
		);
	}
	jboolean ContentProviderClient::refresh(android::net::Uri arg0, android::os::Bundle arg1, android::os::CancellationSignal arg2)
	{
		return callMethod<jboolean>(
			"refresh",
			"(Landroid/net/Uri;Landroid/os/Bundle;Landroid/os/CancellationSignal;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	jboolean ContentProviderClient::release()
	{
		return callMethod<jboolean>(
			"release",
			"()Z"
		);
	}
	android::net::Uri ContentProviderClient::uncanonicalize(android::net::Uri arg0)
	{
		return callObjectMethod(
			"uncanonicalize",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.object()
		);
	}
	jint ContentProviderClient::update(android::net::Uri arg0, android::content::ContentValues arg1, android::os::Bundle arg2)
	{
		return callMethod<jint>(
			"update",
			"(Landroid/net/Uri;Landroid/content/ContentValues;Landroid/os/Bundle;)I",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	jint ContentProviderClient::update(android::net::Uri arg0, android::content::ContentValues arg1, JString arg2, JArray arg3)
	{
		return callMethod<jint>(
			"update",
			"(Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>(),
			arg3.object<jarray>()
		);
	}
} // namespace android::content

