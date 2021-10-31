#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::util::concurrent
{
	class TimeUnit;
}

namespace java::util::concurrent
{
	class CompletableFuture : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CompletableFuture(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CompletableFuture(QJniObject obj);
		
		// Constructors
		CompletableFuture();
		
		// Methods
		static java::util::concurrent::CompletableFuture allOf(jarray arg0);
		static java::util::concurrent::CompletableFuture anyOf(jarray arg0);
		static java::util::concurrent::CompletableFuture completedFuture(jobject arg0);
		static __JniBaseClass completedStage(jobject arg0);
		static __JniBaseClass delayedExecutor(jlong arg0, java::util::concurrent::TimeUnit arg1);
		static __JniBaseClass delayedExecutor(jlong arg0, java::util::concurrent::TimeUnit arg1, __JniBaseClass arg2);
		static java::util::concurrent::CompletableFuture failedFuture(jthrowable arg0);
		static __JniBaseClass failedStage(jthrowable arg0);
		static java::util::concurrent::CompletableFuture runAsync(__JniBaseClass arg0);
		static java::util::concurrent::CompletableFuture runAsync(__JniBaseClass arg0, __JniBaseClass arg1);
		static java::util::concurrent::CompletableFuture supplyAsync(__JniBaseClass arg0);
		static java::util::concurrent::CompletableFuture supplyAsync(__JniBaseClass arg0, __JniBaseClass arg1);
		java::util::concurrent::CompletableFuture acceptEither(__JniBaseClass arg0, __JniBaseClass arg1);
		java::util::concurrent::CompletableFuture acceptEitherAsync(__JniBaseClass arg0, __JniBaseClass arg1);
		java::util::concurrent::CompletableFuture acceptEitherAsync(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		java::util::concurrent::CompletableFuture applyToEither(__JniBaseClass arg0, __JniBaseClass arg1);
		java::util::concurrent::CompletableFuture applyToEitherAsync(__JniBaseClass arg0, __JniBaseClass arg1);
		java::util::concurrent::CompletableFuture applyToEitherAsync(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		jboolean cancel(jboolean arg0);
		jboolean complete(jobject arg0);
		java::util::concurrent::CompletableFuture completeAsync(__JniBaseClass arg0);
		java::util::concurrent::CompletableFuture completeAsync(__JniBaseClass arg0, __JniBaseClass arg1);
		jboolean completeExceptionally(jthrowable arg0);
		java::util::concurrent::CompletableFuture completeOnTimeout(jobject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2);
		java::util::concurrent::CompletableFuture copy();
		__JniBaseClass defaultExecutor();
		java::util::concurrent::CompletableFuture exceptionally(__JniBaseClass arg0);
		java::util::concurrent::CompletableFuture exceptionallyAsync(__JniBaseClass arg0);
		java::util::concurrent::CompletableFuture exceptionallyAsync(__JniBaseClass arg0, __JniBaseClass arg1);
		java::util::concurrent::CompletableFuture exceptionallyCompose(__JniBaseClass arg0);
		java::util::concurrent::CompletableFuture exceptionallyComposeAsync(__JniBaseClass arg0);
		java::util::concurrent::CompletableFuture exceptionallyComposeAsync(__JniBaseClass arg0, __JniBaseClass arg1);
		jobject get();
		jobject get(jlong arg0, java::util::concurrent::TimeUnit arg1);
		jobject getNow(jobject arg0);
		jint getNumberOfDependents();
		java::util::concurrent::CompletableFuture handle(__JniBaseClass arg0);
		java::util::concurrent::CompletableFuture handleAsync(__JniBaseClass arg0);
		java::util::concurrent::CompletableFuture handleAsync(__JniBaseClass arg0, __JniBaseClass arg1);
		jboolean isCancelled();
		jboolean isCompletedExceptionally();
		jboolean isDone();
		jobject join();
		__JniBaseClass minimalCompletionStage();
		java::util::concurrent::CompletableFuture newIncompleteFuture();
		void obtrudeException(jthrowable arg0);
		void obtrudeValue(jobject arg0);
		java::util::concurrent::CompletableFuture orTimeout(jlong arg0, java::util::concurrent::TimeUnit arg1);
		java::util::concurrent::CompletableFuture runAfterBoth(__JniBaseClass arg0, __JniBaseClass arg1);
		java::util::concurrent::CompletableFuture runAfterBothAsync(__JniBaseClass arg0, __JniBaseClass arg1);
		java::util::concurrent::CompletableFuture runAfterBothAsync(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		java::util::concurrent::CompletableFuture runAfterEither(__JniBaseClass arg0, __JniBaseClass arg1);
		java::util::concurrent::CompletableFuture runAfterEitherAsync(__JniBaseClass arg0, __JniBaseClass arg1);
		java::util::concurrent::CompletableFuture runAfterEitherAsync(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		java::util::concurrent::CompletableFuture thenAccept(__JniBaseClass arg0);
		java::util::concurrent::CompletableFuture thenAcceptAsync(__JniBaseClass arg0);
		java::util::concurrent::CompletableFuture thenAcceptAsync(__JniBaseClass arg0, __JniBaseClass arg1);
		java::util::concurrent::CompletableFuture thenAcceptBoth(__JniBaseClass arg0, __JniBaseClass arg1);
		java::util::concurrent::CompletableFuture thenAcceptBothAsync(__JniBaseClass arg0, __JniBaseClass arg1);
		java::util::concurrent::CompletableFuture thenAcceptBothAsync(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		java::util::concurrent::CompletableFuture thenApply(__JniBaseClass arg0);
		java::util::concurrent::CompletableFuture thenApplyAsync(__JniBaseClass arg0);
		java::util::concurrent::CompletableFuture thenApplyAsync(__JniBaseClass arg0, __JniBaseClass arg1);
		java::util::concurrent::CompletableFuture thenCombine(__JniBaseClass arg0, __JniBaseClass arg1);
		java::util::concurrent::CompletableFuture thenCombineAsync(__JniBaseClass arg0, __JniBaseClass arg1);
		java::util::concurrent::CompletableFuture thenCombineAsync(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		java::util::concurrent::CompletableFuture thenCompose(__JniBaseClass arg0);
		java::util::concurrent::CompletableFuture thenComposeAsync(__JniBaseClass arg0);
		java::util::concurrent::CompletableFuture thenComposeAsync(__JniBaseClass arg0, __JniBaseClass arg1);
		java::util::concurrent::CompletableFuture thenRun(__JniBaseClass arg0);
		java::util::concurrent::CompletableFuture thenRunAsync(__JniBaseClass arg0);
		java::util::concurrent::CompletableFuture thenRunAsync(__JniBaseClass arg0, __JniBaseClass arg1);
		java::util::concurrent::CompletableFuture toCompletableFuture();
		jstring toString();
		java::util::concurrent::CompletableFuture whenComplete(__JniBaseClass arg0);
		java::util::concurrent::CompletableFuture whenCompleteAsync(__JniBaseClass arg0);
		java::util::concurrent::CompletableFuture whenCompleteAsync(__JniBaseClass arg0, __JniBaseClass arg1);
	};
} // namespace java::util::concurrent

