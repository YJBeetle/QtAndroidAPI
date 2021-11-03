#pragma once

#include "../../../JObject.hpp"

namespace java::util::concurrent
{
	class TimeUnit;
}

namespace java::util::concurrent
{
	class CompletableFuture : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CompletableFuture(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CompletableFuture(QAndroidJniObject obj);
		
		// Constructors
		CompletableFuture();
		
		// Methods
		static java::util::concurrent::CompletableFuture allOf(jarray arg0);
		static java::util::concurrent::CompletableFuture anyOf(jarray arg0);
		static java::util::concurrent::CompletableFuture completedFuture(jobject arg0);
		static JObject completedStage(jobject arg0);
		static JObject delayedExecutor(jlong arg0, java::util::concurrent::TimeUnit arg1);
		static JObject delayedExecutor(jlong arg0, java::util::concurrent::TimeUnit arg1, JObject arg2);
		static java::util::concurrent::CompletableFuture failedFuture(jthrowable arg0);
		static JObject failedStage(jthrowable arg0);
		static java::util::concurrent::CompletableFuture runAsync(JObject arg0);
		static java::util::concurrent::CompletableFuture runAsync(JObject arg0, JObject arg1);
		static java::util::concurrent::CompletableFuture supplyAsync(JObject arg0);
		static java::util::concurrent::CompletableFuture supplyAsync(JObject arg0, JObject arg1);
		java::util::concurrent::CompletableFuture acceptEither(JObject arg0, JObject arg1);
		java::util::concurrent::CompletableFuture acceptEitherAsync(JObject arg0, JObject arg1);
		java::util::concurrent::CompletableFuture acceptEitherAsync(JObject arg0, JObject arg1, JObject arg2);
		java::util::concurrent::CompletableFuture applyToEither(JObject arg0, JObject arg1);
		java::util::concurrent::CompletableFuture applyToEitherAsync(JObject arg0, JObject arg1);
		java::util::concurrent::CompletableFuture applyToEitherAsync(JObject arg0, JObject arg1, JObject arg2);
		jboolean cancel(jboolean arg0);
		jboolean complete(jobject arg0);
		java::util::concurrent::CompletableFuture completeAsync(JObject arg0);
		java::util::concurrent::CompletableFuture completeAsync(JObject arg0, JObject arg1);
		jboolean completeExceptionally(jthrowable arg0);
		java::util::concurrent::CompletableFuture completeOnTimeout(jobject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2);
		java::util::concurrent::CompletableFuture copy();
		JObject defaultExecutor();
		java::util::concurrent::CompletableFuture exceptionally(JObject arg0);
		java::util::concurrent::CompletableFuture exceptionallyAsync(JObject arg0);
		java::util::concurrent::CompletableFuture exceptionallyAsync(JObject arg0, JObject arg1);
		java::util::concurrent::CompletableFuture exceptionallyCompose(JObject arg0);
		java::util::concurrent::CompletableFuture exceptionallyComposeAsync(JObject arg0);
		java::util::concurrent::CompletableFuture exceptionallyComposeAsync(JObject arg0, JObject arg1);
		jobject get();
		jobject get(jlong arg0, java::util::concurrent::TimeUnit arg1);
		jobject getNow(jobject arg0);
		jint getNumberOfDependents();
		java::util::concurrent::CompletableFuture handle(JObject arg0);
		java::util::concurrent::CompletableFuture handleAsync(JObject arg0);
		java::util::concurrent::CompletableFuture handleAsync(JObject arg0, JObject arg1);
		jboolean isCancelled();
		jboolean isCompletedExceptionally();
		jboolean isDone();
		jobject join();
		JObject minimalCompletionStage();
		java::util::concurrent::CompletableFuture newIncompleteFuture();
		void obtrudeException(jthrowable arg0);
		void obtrudeValue(jobject arg0);
		java::util::concurrent::CompletableFuture orTimeout(jlong arg0, java::util::concurrent::TimeUnit arg1);
		java::util::concurrent::CompletableFuture runAfterBoth(JObject arg0, JObject arg1);
		java::util::concurrent::CompletableFuture runAfterBothAsync(JObject arg0, JObject arg1);
		java::util::concurrent::CompletableFuture runAfterBothAsync(JObject arg0, JObject arg1, JObject arg2);
		java::util::concurrent::CompletableFuture runAfterEither(JObject arg0, JObject arg1);
		java::util::concurrent::CompletableFuture runAfterEitherAsync(JObject arg0, JObject arg1);
		java::util::concurrent::CompletableFuture runAfterEitherAsync(JObject arg0, JObject arg1, JObject arg2);
		java::util::concurrent::CompletableFuture thenAccept(JObject arg0);
		java::util::concurrent::CompletableFuture thenAcceptAsync(JObject arg0);
		java::util::concurrent::CompletableFuture thenAcceptAsync(JObject arg0, JObject arg1);
		java::util::concurrent::CompletableFuture thenAcceptBoth(JObject arg0, JObject arg1);
		java::util::concurrent::CompletableFuture thenAcceptBothAsync(JObject arg0, JObject arg1);
		java::util::concurrent::CompletableFuture thenAcceptBothAsync(JObject arg0, JObject arg1, JObject arg2);
		java::util::concurrent::CompletableFuture thenApply(JObject arg0);
		java::util::concurrent::CompletableFuture thenApplyAsync(JObject arg0);
		java::util::concurrent::CompletableFuture thenApplyAsync(JObject arg0, JObject arg1);
		java::util::concurrent::CompletableFuture thenCombine(JObject arg0, JObject arg1);
		java::util::concurrent::CompletableFuture thenCombineAsync(JObject arg0, JObject arg1);
		java::util::concurrent::CompletableFuture thenCombineAsync(JObject arg0, JObject arg1, JObject arg2);
		java::util::concurrent::CompletableFuture thenCompose(JObject arg0);
		java::util::concurrent::CompletableFuture thenComposeAsync(JObject arg0);
		java::util::concurrent::CompletableFuture thenComposeAsync(JObject arg0, JObject arg1);
		java::util::concurrent::CompletableFuture thenRun(JObject arg0);
		java::util::concurrent::CompletableFuture thenRunAsync(JObject arg0);
		java::util::concurrent::CompletableFuture thenRunAsync(JObject arg0, JObject arg1);
		java::util::concurrent::CompletableFuture toCompletableFuture();
		jstring toString();
		java::util::concurrent::CompletableFuture whenComplete(JObject arg0);
		java::util::concurrent::CompletableFuture whenCompleteAsync(JObject arg0);
		java::util::concurrent::CompletableFuture whenCompleteAsync(JObject arg0, JObject arg1);
	};
} // namespace java::util::concurrent

