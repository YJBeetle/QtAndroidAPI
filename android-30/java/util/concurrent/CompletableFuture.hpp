#pragma once

#include "../../../JObject.hpp"

class JArray;
class JObject;
class JString;
class JThrowable;
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
		CompletableFuture(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		CompletableFuture();
		
		// Methods
		static java::util::concurrent::CompletableFuture allOf(JArray arg0);
		static java::util::concurrent::CompletableFuture anyOf(JArray arg0);
		static java::util::concurrent::CompletableFuture completedFuture(JObject arg0);
		static JObject completedStage(JObject arg0);
		static JObject delayedExecutor(jlong arg0, java::util::concurrent::TimeUnit arg1);
		static JObject delayedExecutor(jlong arg0, java::util::concurrent::TimeUnit arg1, JObject arg2);
		static java::util::concurrent::CompletableFuture failedFuture(JThrowable arg0);
		static JObject failedStage(JThrowable arg0);
		static java::util::concurrent::CompletableFuture runAsync(JObject arg0);
		static java::util::concurrent::CompletableFuture runAsync(JObject arg0, JObject arg1);
		static java::util::concurrent::CompletableFuture supplyAsync(JObject arg0);
		static java::util::concurrent::CompletableFuture supplyAsync(JObject arg0, JObject arg1);
		java::util::concurrent::CompletableFuture acceptEither(JObject arg0, JObject arg1) const;
		java::util::concurrent::CompletableFuture acceptEitherAsync(JObject arg0, JObject arg1) const;
		java::util::concurrent::CompletableFuture acceptEitherAsync(JObject arg0, JObject arg1, JObject arg2) const;
		java::util::concurrent::CompletableFuture applyToEither(JObject arg0, JObject arg1) const;
		java::util::concurrent::CompletableFuture applyToEitherAsync(JObject arg0, JObject arg1) const;
		java::util::concurrent::CompletableFuture applyToEitherAsync(JObject arg0, JObject arg1, JObject arg2) const;
		jboolean cancel(jboolean arg0) const;
		jboolean complete(JObject arg0) const;
		java::util::concurrent::CompletableFuture completeAsync(JObject arg0) const;
		java::util::concurrent::CompletableFuture completeAsync(JObject arg0, JObject arg1) const;
		jboolean completeExceptionally(JThrowable arg0) const;
		java::util::concurrent::CompletableFuture completeOnTimeout(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2) const;
		java::util::concurrent::CompletableFuture copy() const;
		JObject defaultExecutor() const;
		java::util::concurrent::CompletableFuture exceptionally(JObject arg0) const;
		java::util::concurrent::CompletableFuture exceptionallyAsync(JObject arg0) const;
		java::util::concurrent::CompletableFuture exceptionallyAsync(JObject arg0, JObject arg1) const;
		java::util::concurrent::CompletableFuture exceptionallyCompose(JObject arg0) const;
		java::util::concurrent::CompletableFuture exceptionallyComposeAsync(JObject arg0) const;
		java::util::concurrent::CompletableFuture exceptionallyComposeAsync(JObject arg0, JObject arg1) const;
		JObject get() const;
		JObject get(jlong arg0, java::util::concurrent::TimeUnit arg1) const;
		JObject getNow(JObject arg0) const;
		jint getNumberOfDependents() const;
		java::util::concurrent::CompletableFuture handle(JObject arg0) const;
		java::util::concurrent::CompletableFuture handleAsync(JObject arg0) const;
		java::util::concurrent::CompletableFuture handleAsync(JObject arg0, JObject arg1) const;
		jboolean isCancelled() const;
		jboolean isCompletedExceptionally() const;
		jboolean isDone() const;
		JObject join() const;
		JObject minimalCompletionStage() const;
		java::util::concurrent::CompletableFuture newIncompleteFuture() const;
		void obtrudeException(JThrowable arg0) const;
		void obtrudeValue(JObject arg0) const;
		java::util::concurrent::CompletableFuture orTimeout(jlong arg0, java::util::concurrent::TimeUnit arg1) const;
		java::util::concurrent::CompletableFuture runAfterBoth(JObject arg0, JObject arg1) const;
		java::util::concurrent::CompletableFuture runAfterBothAsync(JObject arg0, JObject arg1) const;
		java::util::concurrent::CompletableFuture runAfterBothAsync(JObject arg0, JObject arg1, JObject arg2) const;
		java::util::concurrent::CompletableFuture runAfterEither(JObject arg0, JObject arg1) const;
		java::util::concurrent::CompletableFuture runAfterEitherAsync(JObject arg0, JObject arg1) const;
		java::util::concurrent::CompletableFuture runAfterEitherAsync(JObject arg0, JObject arg1, JObject arg2) const;
		java::util::concurrent::CompletableFuture thenAccept(JObject arg0) const;
		java::util::concurrent::CompletableFuture thenAcceptAsync(JObject arg0) const;
		java::util::concurrent::CompletableFuture thenAcceptAsync(JObject arg0, JObject arg1) const;
		java::util::concurrent::CompletableFuture thenAcceptBoth(JObject arg0, JObject arg1) const;
		java::util::concurrent::CompletableFuture thenAcceptBothAsync(JObject arg0, JObject arg1) const;
		java::util::concurrent::CompletableFuture thenAcceptBothAsync(JObject arg0, JObject arg1, JObject arg2) const;
		java::util::concurrent::CompletableFuture thenApply(JObject arg0) const;
		java::util::concurrent::CompletableFuture thenApplyAsync(JObject arg0) const;
		java::util::concurrent::CompletableFuture thenApplyAsync(JObject arg0, JObject arg1) const;
		java::util::concurrent::CompletableFuture thenCombine(JObject arg0, JObject arg1) const;
		java::util::concurrent::CompletableFuture thenCombineAsync(JObject arg0, JObject arg1) const;
		java::util::concurrent::CompletableFuture thenCombineAsync(JObject arg0, JObject arg1, JObject arg2) const;
		java::util::concurrent::CompletableFuture thenCompose(JObject arg0) const;
		java::util::concurrent::CompletableFuture thenComposeAsync(JObject arg0) const;
		java::util::concurrent::CompletableFuture thenComposeAsync(JObject arg0, JObject arg1) const;
		java::util::concurrent::CompletableFuture thenRun(JObject arg0) const;
		java::util::concurrent::CompletableFuture thenRunAsync(JObject arg0) const;
		java::util::concurrent::CompletableFuture thenRunAsync(JObject arg0, JObject arg1) const;
		java::util::concurrent::CompletableFuture toCompletableFuture() const;
		JString toString() const;
		java::util::concurrent::CompletableFuture whenComplete(JObject arg0) const;
		java::util::concurrent::CompletableFuture whenCompleteAsync(JObject arg0) const;
		java::util::concurrent::CompletableFuture whenCompleteAsync(JObject arg0, JObject arg1) const;
	};
} // namespace java::util::concurrent

