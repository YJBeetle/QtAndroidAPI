#include "./GetByDocumentIdRequest.hpp"
#include "./PutDocumentsRequest.hpp"
#include "./RemoveByDocumentIdRequest.hpp"
#include "./ReportUsageRequest.hpp"
#include "./SearchResults.hpp"
#include "./SearchSpec.hpp"
#include "./SetSchemaRequest.hpp"
#include "../../../JString.hpp"
#include "./AppSearchSession.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QJniObject forward
	AppSearchSession::AppSearchSession(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void AppSearchSession::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void AppSearchSession::getByDocumentId(android::app::appsearch::GetByDocumentIdRequest arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"getByDocumentId",
			"(Landroid/app/appsearch/GetByDocumentIdRequest;Ljava/util/concurrent/Executor;Landroid/app/appsearch/BatchResultCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void AppSearchSession::getNamespaces(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"getNamespaces",
			"(Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void AppSearchSession::getSchema(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"getSchema",
			"(Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void AppSearchSession::getStorageInfo(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"getStorageInfo",
			"(Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void AppSearchSession::put(android::app::appsearch::PutDocumentsRequest arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"put",
			"(Landroid/app/appsearch/PutDocumentsRequest;Ljava/util/concurrent/Executor;Landroid/app/appsearch/BatchResultCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void AppSearchSession::remove(android::app::appsearch::RemoveByDocumentIdRequest arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"remove",
			"(Landroid/app/appsearch/RemoveByDocumentIdRequest;Ljava/util/concurrent/Executor;Landroid/app/appsearch/BatchResultCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void AppSearchSession::remove(JString arg0, android::app::appsearch::SearchSpec arg1, JObject arg2, JObject arg3) const
	{
		callMethod<void>(
			"remove",
			"(Ljava/lang/String;Landroid/app/appsearch/SearchSpec;Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	void AppSearchSession::reportUsage(android::app::appsearch::ReportUsageRequest arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"reportUsage",
			"(Landroid/app/appsearch/ReportUsageRequest;Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	android::app::appsearch::SearchResults AppSearchSession::search(JString arg0, android::app::appsearch::SearchSpec arg1) const
	{
		return callObjectMethod(
			"search",
			"(Ljava/lang/String;Landroid/app/appsearch/SearchSpec;)Landroid/app/appsearch/SearchResults;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void AppSearchSession::setSchema(android::app::appsearch::SetSchemaRequest arg0, JObject arg1, JObject arg2, JObject arg3) const
	{
		callMethod<void>(
			"setSchema",
			"(Landroid/app/appsearch/SetSchemaRequest;Ljava/util/concurrent/Executor;Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
} // namespace android::app::appsearch

