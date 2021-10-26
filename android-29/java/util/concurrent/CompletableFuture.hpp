#pragma once

#ifndef JAVA_UTIL_CONCURRENT_COMPLETABLEFUTURE
#define JAVA_UTIL_CONCURRENT_COMPLETABLEFUTURE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util::concurrent
{
	class TimeUnit;
}

namespace __jni_impl::java::util::concurrent
{
	class CompletableFuture : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jobject get();
		jobject get(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1);
		jstring toString();
		jobject join();
		QAndroidJniObject copy();
		QAndroidJniObject handle(__jni_impl::__JniBaseClass arg0);
		jboolean cancel(jboolean arg0);
		jboolean isDone();
		jboolean isCancelled();
		jboolean completeExceptionally(jthrowable arg0);
		jboolean complete(jobject arg0);
		static QAndroidJniObject allOf(jarray arg0);
		static QAndroidJniObject supplyAsync(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject supplyAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject newIncompleteFuture();
		QAndroidJniObject toCompletableFuture();
		QAndroidJniObject defaultExecutor();
		QAndroidJniObject completeAsync(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject completeAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject whenComplete(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject exceptionallyComposeAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject exceptionallyComposeAsync(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject exceptionallyCompose(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject exceptionallyAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject exceptionallyAsync(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject exceptionally(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject whenCompleteAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject whenCompleteAsync(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject handleAsync(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject handleAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject thenComposeAsync(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject thenComposeAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject thenCompose(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject runAfterEitherAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject runAfterEitherAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject runAfterEither(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject acceptEitherAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject acceptEitherAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject acceptEither(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject applyToEitherAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject applyToEitherAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject applyToEither(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject runAfterBothAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject runAfterBothAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject runAfterBoth(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject thenAcceptBothAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject thenAcceptBothAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject thenAcceptBoth(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject thenCombineAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject thenCombineAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject thenCombine(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject thenRunAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject thenRunAsync(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject thenRun(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject thenAcceptAsync(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject thenAcceptAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject thenAccept(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject thenApplyAsync(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject thenApplyAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject thenApply(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject runAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject runAsync(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject completedFuture(jobject arg0);
		jobject getNow(jobject arg0);
		static QAndroidJniObject anyOf(jarray arg0);
		jboolean isCompletedExceptionally();
		void obtrudeValue(jobject arg0);
		void obtrudeException(jthrowable arg0);
		jint getNumberOfDependents();
		QAndroidJniObject minimalCompletionStage();
		QAndroidJniObject orTimeout(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1);
		QAndroidJniObject completeOnTimeout(jobject arg0, jlong arg1, __jni_impl::java::util::concurrent::TimeUnit arg2);
		static QAndroidJniObject delayedExecutor(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1);
		static QAndroidJniObject delayedExecutor(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1, __jni_impl::__JniBaseClass arg2);
		static QAndroidJniObject completedStage(jobject arg0);
		static QAndroidJniObject failedFuture(jthrowable arg0);
		static QAndroidJniObject failedStage(jthrowable arg0);
	};
} // namespace __jni_impl::java::util::concurrent

#include "TimeUnit.hpp"

namespace __jni_impl::java::util::concurrent
{
	// Fields
	
	// Constructors
	void CompletableFuture::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.CompletableFuture",
			"()V"
		);
	}
	
	// Methods
	jobject CompletableFuture::get()
	{
		return __thiz.callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject CompletableFuture::get(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callObjectMethod(
			"get",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jstring CompletableFuture::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jobject CompletableFuture::join()
	{
		return __thiz.callObjectMethod(
			"join",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject CompletableFuture::copy()
	{
		return __thiz.callObjectMethod(
			"copy",
			"()Ljava/util/concurrent/CompletableFuture;"
		);
	}
	QAndroidJniObject CompletableFuture::handle(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"handle",
			"(Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object()
		);
	}
	jboolean CompletableFuture::cancel(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"cancel",
			"(Z)Z",
			arg0
		);
	}
	jboolean CompletableFuture::isDone()
	{
		return __thiz.callMethod<jboolean>(
			"isDone",
			"()Z"
		);
	}
	jboolean CompletableFuture::isCancelled()
	{
		return __thiz.callMethod<jboolean>(
			"isCancelled",
			"()Z"
		);
	}
	jboolean CompletableFuture::completeExceptionally(jthrowable arg0)
	{
		return __thiz.callMethod<jboolean>(
			"completeExceptionally",
			"(Ljava/lang/Throwable;)Z",
			arg0
		);
	}
	jboolean CompletableFuture::complete(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"complete",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject CompletableFuture::allOf(jarray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"allOf",
			"([Ljava/util/concurrent/CompletableFuture;)Ljava/util/concurrent/CompletableFuture;",
			arg0
		);
	}
	QAndroidJniObject CompletableFuture::supplyAsync(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"supplyAsync",
			"(Ljava/util/function/Supplier;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::supplyAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"supplyAsync",
			"(Ljava/util/function/Supplier;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::newIncompleteFuture()
	{
		return __thiz.callObjectMethod(
			"newIncompleteFuture",
			"()Ljava/util/concurrent/CompletableFuture;"
		);
	}
	QAndroidJniObject CompletableFuture::toCompletableFuture()
	{
		return __thiz.callObjectMethod(
			"toCompletableFuture",
			"()Ljava/util/concurrent/CompletableFuture;"
		);
	}
	QAndroidJniObject CompletableFuture::defaultExecutor()
	{
		return __thiz.callObjectMethod(
			"defaultExecutor",
			"()Ljava/util/concurrent/Executor;"
		);
	}
	QAndroidJniObject CompletableFuture::completeAsync(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"completeAsync",
			"(Ljava/util/function/Supplier;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::completeAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"completeAsync",
			"(Ljava/util/function/Supplier;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::whenComplete(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"whenComplete",
			"(Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::exceptionallyComposeAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"exceptionallyComposeAsync",
			"(Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::exceptionallyComposeAsync(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"exceptionallyComposeAsync",
			"(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::exceptionallyCompose(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"exceptionallyCompose",
			"(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::exceptionallyAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"exceptionallyAsync",
			"(Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::exceptionallyAsync(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"exceptionallyAsync",
			"(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::exceptionally(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"exceptionally",
			"(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::whenCompleteAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"whenCompleteAsync",
			"(Ljava/util/function/BiConsumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::whenCompleteAsync(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"whenCompleteAsync",
			"(Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::handleAsync(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"handleAsync",
			"(Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::handleAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"handleAsync",
			"(Ljava/util/function/BiFunction;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::thenComposeAsync(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"thenComposeAsync",
			"(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::thenComposeAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"thenComposeAsync",
			"(Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::thenCompose(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"thenCompose",
			"(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::runAfterEitherAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"runAfterEitherAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::runAfterEitherAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"runAfterEitherAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::runAfterEither(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"runAfterEither",
			"(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::acceptEitherAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"acceptEitherAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::acceptEitherAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"acceptEitherAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::acceptEither(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"acceptEither",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::applyToEitherAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"applyToEitherAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::applyToEitherAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"applyToEitherAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::applyToEither(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"applyToEither",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::runAfterBothAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"runAfterBothAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::runAfterBothAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"runAfterBothAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::runAfterBoth(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"runAfterBoth",
			"(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::thenAcceptBothAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"thenAcceptBothAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::thenAcceptBothAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"thenAcceptBothAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::thenAcceptBoth(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"thenAcceptBoth",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::thenCombineAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"thenCombineAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::thenCombineAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"thenCombineAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::thenCombine(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"thenCombine",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::thenRunAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"thenRunAsync",
			"(Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::thenRunAsync(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"thenRunAsync",
			"(Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::thenRun(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"thenRun",
			"(Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::thenAcceptAsync(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"thenAcceptAsync",
			"(Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::thenAcceptAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"thenAcceptAsync",
			"(Ljava/util/function/Consumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::thenAccept(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"thenAccept",
			"(Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::thenApplyAsync(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"thenApplyAsync",
			"(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::thenApplyAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"thenApplyAsync",
			"(Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::thenApply(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"thenApply",
			"(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::runAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"runAsync",
			"(Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::runAsync(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"runAsync",
			"(Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::completedFuture(jobject arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"completedFuture",
			"(Ljava/lang/Object;)Ljava/util/concurrent/CompletableFuture;",
			arg0
		);
	}
	jobject CompletableFuture::getNow(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"getNow",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	QAndroidJniObject CompletableFuture::anyOf(jarray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"anyOf",
			"([Ljava/util/concurrent/CompletableFuture;)Ljava/util/concurrent/CompletableFuture;",
			arg0
		);
	}
	jboolean CompletableFuture::isCompletedExceptionally()
	{
		return __thiz.callMethod<jboolean>(
			"isCompletedExceptionally",
			"()Z"
		);
	}
	void CompletableFuture::obtrudeValue(jobject arg0)
	{
		__thiz.callMethod<void>(
			"obtrudeValue",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void CompletableFuture::obtrudeException(jthrowable arg0)
	{
		__thiz.callMethod<void>(
			"obtrudeException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	jint CompletableFuture::getNumberOfDependents()
	{
		return __thiz.callMethod<jint>(
			"getNumberOfDependents",
			"()I"
		);
	}
	QAndroidJniObject CompletableFuture::minimalCompletionStage()
	{
		return __thiz.callObjectMethod(
			"minimalCompletionStage",
			"()Ljava/util/concurrent/CompletionStage;"
		);
	}
	QAndroidJniObject CompletableFuture::orTimeout(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callObjectMethod(
			"orTimeout",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/CompletableFuture;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::completeOnTimeout(jobject arg0, jlong arg1, __jni_impl::java::util::concurrent::TimeUnit arg2)
	{
		return __thiz.callObjectMethod(
			"completeOnTimeout",
			"(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/CompletableFuture;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::delayedExecutor(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"delayedExecutor",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/Executor;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::delayedExecutor(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1, __jni_impl::__JniBaseClass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"delayedExecutor",
			"(JLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/Executor;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject CompletableFuture::completedStage(jobject arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"completedStage",
			"(Ljava/lang/Object;)Ljava/util/concurrent/CompletionStage;",
			arg0
		);
	}
	QAndroidJniObject CompletableFuture::failedFuture(jthrowable arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"failedFuture",
			"(Ljava/lang/Throwable;)Ljava/util/concurrent/CompletableFuture;",
			arg0
		);
	}
	QAndroidJniObject CompletableFuture::failedStage(jthrowable arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"failedStage",
			"(Ljava/lang/Throwable;)Ljava/util/concurrent/CompletionStage;",
			arg0
		);
	}
} // namespace __jni_impl::java::util::concurrent

namespace java::util::concurrent
{
	class CompletableFuture : public __jni_impl::java::util::concurrent::CompletableFuture
	{
	public:
		CompletableFuture(QAndroidJniObject obj) { __thiz = obj; }
		CompletableFuture()
		{
			__constructor();
		}
	};
} // namespace java::util::concurrent

#endif // JAVA_UTIL_CONCURRENT_COMPLETABLEFUTURE

