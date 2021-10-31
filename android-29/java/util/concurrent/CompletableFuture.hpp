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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CompletableFuture(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CompletableFuture(QAndroidJniObject obj);
		
		// Constructors
		CompletableFuture();
		
		// Methods
		static QAndroidJniObject allOf(jarray arg0);
		static QAndroidJniObject anyOf(jarray arg0);
		static QAndroidJniObject completedFuture(jobject arg0);
		static QAndroidJniObject completedStage(jobject arg0);
		static QAndroidJniObject delayedExecutor(jlong arg0, java::util::concurrent::TimeUnit arg1);
		static QAndroidJniObject delayedExecutor(jlong arg0, java::util::concurrent::TimeUnit arg1, __JniBaseClass arg2);
		static QAndroidJniObject failedFuture(jthrowable arg0);
		static QAndroidJniObject failedStage(jthrowable arg0);
		static QAndroidJniObject runAsync(__JniBaseClass arg0);
		static QAndroidJniObject runAsync(__JniBaseClass arg0, __JniBaseClass arg1);
		static QAndroidJniObject supplyAsync(__JniBaseClass arg0);
		static QAndroidJniObject supplyAsync(__JniBaseClass arg0, __JniBaseClass arg1);
		QAndroidJniObject acceptEither(__JniBaseClass arg0, __JniBaseClass arg1);
		QAndroidJniObject acceptEitherAsync(__JniBaseClass arg0, __JniBaseClass arg1);
		QAndroidJniObject acceptEitherAsync(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		QAndroidJniObject applyToEither(__JniBaseClass arg0, __JniBaseClass arg1);
		QAndroidJniObject applyToEitherAsync(__JniBaseClass arg0, __JniBaseClass arg1);
		QAndroidJniObject applyToEitherAsync(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		jboolean cancel(jboolean arg0);
		jboolean complete(jobject arg0);
		QAndroidJniObject completeAsync(__JniBaseClass arg0);
		QAndroidJniObject completeAsync(__JniBaseClass arg0, __JniBaseClass arg1);
		jboolean completeExceptionally(jthrowable arg0);
		QAndroidJniObject completeOnTimeout(jobject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2);
		QAndroidJniObject copy();
		QAndroidJniObject defaultExecutor();
		QAndroidJniObject exceptionally(__JniBaseClass arg0);
		QAndroidJniObject exceptionallyAsync(__JniBaseClass arg0);
		QAndroidJniObject exceptionallyAsync(__JniBaseClass arg0, __JniBaseClass arg1);
		QAndroidJniObject exceptionallyCompose(__JniBaseClass arg0);
		QAndroidJniObject exceptionallyComposeAsync(__JniBaseClass arg0);
		QAndroidJniObject exceptionallyComposeAsync(__JniBaseClass arg0, __JniBaseClass arg1);
		jobject get();
		jobject get(jlong arg0, java::util::concurrent::TimeUnit arg1);
		jobject getNow(jobject arg0);
		jint getNumberOfDependents();
		QAndroidJniObject handle(__JniBaseClass arg0);
		QAndroidJniObject handleAsync(__JniBaseClass arg0);
		QAndroidJniObject handleAsync(__JniBaseClass arg0, __JniBaseClass arg1);
		jboolean isCancelled();
		jboolean isCompletedExceptionally();
		jboolean isDone();
		jobject join();
		QAndroidJniObject minimalCompletionStage();
		QAndroidJniObject newIncompleteFuture();
		void obtrudeException(jthrowable arg0);
		void obtrudeValue(jobject arg0);
		QAndroidJniObject orTimeout(jlong arg0, java::util::concurrent::TimeUnit arg1);
		QAndroidJniObject runAfterBoth(__JniBaseClass arg0, __JniBaseClass arg1);
		QAndroidJniObject runAfterBothAsync(__JniBaseClass arg0, __JniBaseClass arg1);
		QAndroidJniObject runAfterBothAsync(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		QAndroidJniObject runAfterEither(__JniBaseClass arg0, __JniBaseClass arg1);
		QAndroidJniObject runAfterEitherAsync(__JniBaseClass arg0, __JniBaseClass arg1);
		QAndroidJniObject runAfterEitherAsync(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		QAndroidJniObject thenAccept(__JniBaseClass arg0);
		QAndroidJniObject thenAcceptAsync(__JniBaseClass arg0);
		QAndroidJniObject thenAcceptAsync(__JniBaseClass arg0, __JniBaseClass arg1);
		QAndroidJniObject thenAcceptBoth(__JniBaseClass arg0, __JniBaseClass arg1);
		QAndroidJniObject thenAcceptBothAsync(__JniBaseClass arg0, __JniBaseClass arg1);
		QAndroidJniObject thenAcceptBothAsync(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		QAndroidJniObject thenApply(__JniBaseClass arg0);
		QAndroidJniObject thenApplyAsync(__JniBaseClass arg0);
		QAndroidJniObject thenApplyAsync(__JniBaseClass arg0, __JniBaseClass arg1);
		QAndroidJniObject thenCombine(__JniBaseClass arg0, __JniBaseClass arg1);
		QAndroidJniObject thenCombineAsync(__JniBaseClass arg0, __JniBaseClass arg1);
		QAndroidJniObject thenCombineAsync(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		QAndroidJniObject thenCompose(__JniBaseClass arg0);
		QAndroidJniObject thenComposeAsync(__JniBaseClass arg0);
		QAndroidJniObject thenComposeAsync(__JniBaseClass arg0, __JniBaseClass arg1);
		QAndroidJniObject thenRun(__JniBaseClass arg0);
		QAndroidJniObject thenRunAsync(__JniBaseClass arg0);
		QAndroidJniObject thenRunAsync(__JniBaseClass arg0, __JniBaseClass arg1);
		QAndroidJniObject toCompletableFuture();
		jstring toString();
		QAndroidJniObject whenComplete(__JniBaseClass arg0);
		QAndroidJniObject whenCompleteAsync(__JniBaseClass arg0);
		QAndroidJniObject whenCompleteAsync(__JniBaseClass arg0, __JniBaseClass arg1);
	};
} // namespace java::util::concurrent

