// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSProject.h"
#include "FPSProjectGameModeBase.h"

void AFPSProjectGameModeBase::StartPlay()
{
	Super::StartPlay();

	if (GEngine) 
	{
		//����� �޽����� 5�ʵ��� ǥ��
		//Ű(ù��° �μ�) ���� -1�� �ϸ� �� �޽����� ������Ʈ�ϰų� ���ΰ�ħ �� �ʿ䰡 ������ ��Ÿ���ϴ�.
		GEngine->AddOnScreenDebugMessage( -1, 5.0f, FColor::Yellow, TEXT("Hello World. this is FPSGameMode!") );
	}
}

