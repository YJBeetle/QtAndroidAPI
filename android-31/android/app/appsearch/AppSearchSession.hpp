#pragma once

#include "./GetByDocumentIdRequest.def.hpp"
#include "./PutDocumentsRequest.def.hpp"
#include "./RemoveByDocumentIdRequest.def.hpp"
#include "./ReportUsageRequest.def.hpp"
#include "./SearchResults.def.hpp"
#include "./SearchSpec.def.hpp"
#include "./SetSchemaRequest.def.hpp"
#include "../../../JString.hpp"
#include "./AppSearchSession.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void AppSearchSession::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void AppSearchSession::getByDocumentId(android::app::appsearch::GetByDocumentIdRequest arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"getByDocumentId",
			"(Landroid/app/appsearch/GetByDocumentIdRequest;Ljava/util/concurrent/Executor;Landroid/app/appsearch/BatchResultCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void AppSearchSession::getNamespaces(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"getNamespaces",
			"(Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void AppSearchSession::getSchema(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"getSchema",
			"(Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void AppSearchSession::getStorageInfo(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"getStorageInfo",
			"(Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void AppSearchSession::put(android::app::appsearch::PutDocumentsRequest arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"put",
			"(Landroid/app/appsearch/PutDocumentsRequest;Ljava/util/concurrent/Executor;Landroid/app/appsearch/BatchResultCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void AppSearchSession::remove(android::app::appsearch::RemoveByDocumentIdRequest arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"remove",
			"(Landroid/app/appsearch/RemoveByDocumentIdRequest;Ljava/util/concurrent/Executor;Landroid/app/appsearch/BatchResultCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void AppSearchSession::remove(JString arg0, android::app::appsearch::SearchSpec arg1, JObject arg2, JObject arg3) const
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
	inline void AppSearchSession::reportUsage(android::app::appsearch::ReportUsageRequest arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"reportUsage",
			"(Landroid/app/appsearch/ReportUsageRequest;Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline android::app::appsearch::SearchResults AppSearchSession::search(JString arg0, android::app::appsearch::SearchSpec arg1) const
	{
		return callObjectMethod(
			"search",
			"(Ljava/lang/String;Landroid/app/appsearch/SearchSpec;)Landroid/app/appsearch/SearchResults;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void AppSearchSession::setSchema(android::app::appsearch::SetSchemaRequest arg0, JObject arg1, JObject arg2, JObject arg3) const
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

// Base class headers

